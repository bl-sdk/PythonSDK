#pragma once

#include "stdafx.h"

namespace py = pybind11;
void Export_pystes_Core_structs(py::module_& m);
void Export_pystes_Core_classes(py::module_& m);
void Export_pystes_TArray(py::module_& m);
void Export_pystes_gamedefines(py::module_& m);
