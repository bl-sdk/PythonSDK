#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_CameraAnim()
{
    class_< UPlayerBehavior_CameraAnim, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_CameraAnim", no_init)
        .def_readwrite("Anim", &UPlayerBehavior_CameraAnim::Anim)
        .def("StaticClass", &UPlayerBehavior_CameraAnim::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_CameraAnim::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}