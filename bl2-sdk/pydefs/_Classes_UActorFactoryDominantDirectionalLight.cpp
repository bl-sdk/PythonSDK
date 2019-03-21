#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryDominantDirectionalLight(py::object m)
{
    py::class_< UActorFactoryDominantDirectionalLight,  UActorFactory   >(m, "UActorFactoryDominantDirectionalLight")
        .def("StaticClass", &UActorFactoryDominantDirectionalLight::StaticClass, py::return_value_policy::reference)
          ;
}