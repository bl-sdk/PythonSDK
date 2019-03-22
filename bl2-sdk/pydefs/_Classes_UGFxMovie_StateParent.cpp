#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovie_StateParent(py::module &m)
{
    py::class_< UGFxMovie_StateParent,  UGearboxGFxMovie   >(m, "UGFxMovie_StateParent")
        .def_readwrite("StateClass", &UGFxMovie_StateParent::StateClass)
        .def("MovieState_OnChanged", &UGFxMovie_StateParent::MovieState_OnChanged)
        .def("eventStart", &UGFxMovie_StateParent::eventStart)
          ;
}