#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNameEntry(py::module &m)
{
	py::class_< FNameEntry >(m, "FNameEntry")
		.def_readonly("Name", &FNameEntry::Name)
		.def("AppendNameToString", &FNameEntry::AppendNameToString)
		;

}