#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovie_StateParent()
{
    py::class_< UGFxMovie_StateParent,  UGearboxGFxMovie   >("UGFxMovie_StateParent")
        .def_readwrite("StateClass", &UGFxMovie_StateParent::StateClass)
        .def("StaticClass", &UGFxMovie_StateParent::StaticClass, py::return_value_policy::reference)
        .def("MovieState_OnChanged", &UGFxMovie_StateParent::MovieState_OnChanged)
        .def("eventStart", &UGFxMovie_StateParent::eventStart)
        .staticmethod("StaticClass")
  ;
}