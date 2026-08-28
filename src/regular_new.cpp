#include "MatrixArrayWorkload.hpp"

#include <cstddef>

namespace {

bool initializeMemory(std::size_t) noexcept {
    return true;
}

bool shutdownMemory() noexcept {
    return true;
}

}

int main(int argument_count, char** arguments) {
    return matrix_array_workload::run(
        argument_count,
        arguments,
        "regular new",
        initializeMemory,
        shutdownMemory
    );
}
