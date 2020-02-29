#pragma once

#include "stdafx.h"

namespace py = pybind11;
void Export_pystes_Core_structs(py::module& m);
void Export_pystes_Core_classes(py::module& m);
void Export_pystes_TArray(py::module& m);
void Export_pystes_gamedefines(py::module& m);
