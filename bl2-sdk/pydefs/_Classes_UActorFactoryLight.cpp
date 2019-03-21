#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryLight(py::object m)
{
    py::class_< UActorFactoryLight,  UActorFactory   >(m, "UActorFactoryLight")
        .def("StaticClass", &UActorFactoryLight::StaticClass, py::return_value_policy::reference)
          ;
}