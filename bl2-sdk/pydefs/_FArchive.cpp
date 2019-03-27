#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FArchive(py::module &m)
{
	py::class_< FArchive >(m, "FArchive")
		;

}