#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryCoverLink(py::object m)
{
    py::class_< UActorFactoryCoverLink,  UActorFactory   >(m, "UActorFactoryCoverLink")
        .def("StaticClass", &UActorFactoryCoverLink::StaticClass, py::return_value_policy::reference)
          ;
}