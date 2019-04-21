#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_TArray(py::module &m)
{
	py::class_< PyTArray>(m, "PyTArray", py::dynamic_attr());
}