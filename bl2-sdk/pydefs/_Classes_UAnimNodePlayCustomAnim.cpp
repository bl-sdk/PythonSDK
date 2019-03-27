#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAnimNodePlayCustomAnim(py::module &m)
{
    py::class_< UAnimNodePlayCustomAnim,  UAnimNodeBlend   >(m, "UAnimNodePlayCustomAnim")
		.def_static("StaticClass", &UAnimNodePlayCustomAnim::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomPendingBlendOutTime", &UAnimNodePlayCustomAnim::CustomPendingBlendOutTime)
        .def("SetRootBoneAxisOption", &UAnimNodePlayCustomAnim::SetRootBoneAxisOption)
        .def("GetCustomAnimNodeSeq", &UAnimNodePlayCustomAnim::GetCustomAnimNodeSeq, py::return_value_policy::reference)
        .def("SetActorAnimEndNotification", &UAnimNodePlayCustomAnim::SetActorAnimEndNotification)
        .def("SetCustomAnim", &UAnimNodePlayCustomAnim::SetCustomAnim)
        .def("StopCustomAnim", &UAnimNodePlayCustomAnim::StopCustomAnim)
        .def("PlayCustomAnimByDuration", &UAnimNodePlayCustomAnim::PlayCustomAnimByDuration)
        .def("PlayCustomAnim", &UAnimNodePlayCustomAnim::PlayCustomAnim)
          ;
}