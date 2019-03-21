#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieInfo(py::object m)
{
    py::class_< UGFxMovieInfo,  USwfMovie   >(m, "UGFxMovieInfo")
        .def("StaticClass", &UGFxMovieInfo::StaticClass, py::return_value_policy::reference)
          ;
}