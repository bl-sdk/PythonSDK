#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBulletListenerComponent()
{
    py::class_< UBulletListenerComponent,  UCylinderComponent   >("UBulletListenerComponent")
        .def_readwrite("OnBulletTouch", &UBulletListenerComponent::OnBulletTouch)
        .def("StaticClass", &UBulletListenerComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}