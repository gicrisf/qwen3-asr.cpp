#pragma once

namespace qwen3_asr {

enum class backend_mode {
    auto_backend,
    cpu,
    gpu,
};

inline const char * backend_mode_name(backend_mode mode) {
    switch (mode) {
        case backend_mode::auto_backend: return "auto";
        case backend_mode::cpu:          return "cpu";
        case backend_mode::gpu:          return "gpu";
    }
    return "auto";
}

} // namespace qwen3_asr
