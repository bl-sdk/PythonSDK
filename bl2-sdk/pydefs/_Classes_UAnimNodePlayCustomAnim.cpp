#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNodePlayCustomAnim()
{
    class_< UAnimNodePlayCustomAnim, bases< UAnimNodeBlend >  , boost::noncopyable>("UAnimNodePlayCustomAnim", no_init)
        .def_readwrite("CustomPendingBlendOutTime", &UAnimNodePlayCustomAnim::CustomPendingBlendOutTime)
        .def("StaticClass", &UAnimNodePlayCustomAnim::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetRootBoneAxisOption", &UAnimNodePlayCustomAnim::SetRootBoneAxisOption)
        .def("GetCustomAnimNodeSeq", &UAnimNodePlayCustomAnim::GetCustomAnimNodeSeq, return_value_policy< reference_existing_object >())
        .def("SetActorAnimEndNotification", &UAnimNodePlayCustomAnim::SetActorAnimEndNotification)
        .def("SetCustomAnim", &UAnimNodePlayCustomAnim::SetCustomAnim)
        .def("StopCustomAnim", &UAnimNodePlayCustomAnim::StopCustomAnim)
        .def("PlayCustomAnimByDuration", &UAnimNodePlayCustomAnim::PlayCustomAnimByDuration)
        .def("PlayCustomAnim", &UAnimNodePlayCustomAnim::PlayCustomAnim)
        .staticmethod("StaticClass")
  ;
}