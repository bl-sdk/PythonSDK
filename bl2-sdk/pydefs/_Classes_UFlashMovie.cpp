#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlashMovie()
{
    py::class_< UFlashMovie,  USwfMovie   >("UFlashMovie")
        .def("StaticClass", &UFlashMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}