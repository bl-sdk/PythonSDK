#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryPropObject()
{
    py::class_< UActorFactoryPropObject,  UActorFactoryInteractiveObject   >("UActorFactoryPropObject")
        .def("StaticClass", &UActorFactoryPropObject::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}