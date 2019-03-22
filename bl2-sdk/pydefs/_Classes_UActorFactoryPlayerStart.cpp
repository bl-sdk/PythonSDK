#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPlayerStart(py::module &m)
{
    py::class_< UActorFactoryPlayerStart,  UActorFactory   >(m, "UActorFactoryPlayerStart")
        .def("StaticClass", &UActorFactoryPlayerStart::StaticClass, py::return_value_policy::reference)
          ;
}