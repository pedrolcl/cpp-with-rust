#pragma once
#include <vector>

namespace org::blobstore {
    struct MultiBuf {
        std::vector<std::vector<uint8_t>> chunks;
        size_t pos;

        bool has_more_chunks() const;
        std::vector<uint8_t>& next_chunk();
        const std::vector<uint8_t>& get_chunk(uint64_t pos) const;

    };
}
