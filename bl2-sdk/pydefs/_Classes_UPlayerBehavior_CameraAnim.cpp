#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_CameraAnim()
{
    py::class_< UPlayerBehavior_CameraAnim,  UPlayerBehaviorBase   >("UPlayerBehavior_CameraAnim")
        .def_readwrite("Anim", &UPlayerBehavior_CameraAnim::Anim)
        .def("StaticClass", &UPlayerBehavior_CameraAnim::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_CameraAnim::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}