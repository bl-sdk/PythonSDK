#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCodecMovieBink(py::module &m)
{
    py::class_< UCodecMovieBink,  UCodecMovie   >(m, "UCodecMovieBink")
		.def_static("StaticClass", &UCodecMovieBink::StaticClass, py::return_value_policy::reference)
          ;
}