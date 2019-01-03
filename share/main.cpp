#include <pybind11/embed.h>

namespace py = pybind11;

void importer(const std::string &module) {
    py::print("importing " + module);
    py::module::import(module.c_str());
    py::print("done importing " + module);
}

int main() {
    py::scoped_interpreter guard{};

    importer("numpy");
    importer("tensorflow");
}
