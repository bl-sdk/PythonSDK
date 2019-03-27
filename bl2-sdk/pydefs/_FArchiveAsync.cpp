#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FArchiveAsync(py::module &m)
{
	py::class_< FArchiveAsync >(m, "FArchiveAsync")
		.def_readonly("Unknown", &FArchiveAsync::Unknown)
		.def_readwrite("CurrentPos", &FArchiveAsync::CurrentPos)
		;

}