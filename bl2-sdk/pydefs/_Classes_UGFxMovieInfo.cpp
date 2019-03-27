#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieInfo(py::module &m)
{
    py::class_< UGFxMovieInfo,  USwfMovie   >(m, "UGFxMovieInfo")
		.def_static("StaticClass", &UGFxMovieInfo::StaticClass, py::return_value_policy::reference)
          ;
}