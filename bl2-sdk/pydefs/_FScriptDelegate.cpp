#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScriptDelegate(py::module &m)
{
	py::class_< FScriptDelegate >(m, "FScriptDelegate")
		.def_readonly("UnknownData00", &FScriptDelegate::UnknownData00)
		;

}