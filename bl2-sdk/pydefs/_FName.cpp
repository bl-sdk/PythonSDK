#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FName(py::module &m)
{
	py::class_< FName >(m, "FName")
		.def_readwrite("Index", &FName::Index)
		.def_readwrite("Number", &FName::Number)
		;

}