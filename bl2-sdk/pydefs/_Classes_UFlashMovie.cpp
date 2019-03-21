#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFlashMovie(py::object m)
{
    py::class_< UFlashMovie,  USwfMovie   >(m, "UFlashMovie")
        .def("StaticClass", &UFlashMovie::StaticClass, py::return_value_policy::reference)
          ;
}