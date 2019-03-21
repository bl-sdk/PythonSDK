#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDWidget_Challenges()
{
    py::class_< UHUDWidget_Challenges,  UHUDWidget_Base   >("UHUDWidget_Challenges")
        .def_readwrite("InnerClip", &UHUDWidget_Challenges::InnerClip)
        .def_readwrite("HeaderClip", &UHUDWidget_Challenges::HeaderClip)
        .def_readwrite("SubtextClip", &UHUDWidget_Challenges::SubtextClip)
        .def_readwrite("SubtextInnerClip", &UHUDWidget_Challenges::SubtextInnerClip)
        .def_readwrite("SubtextInnerTextClip", &UHUDWidget_Challenges::SubtextInnerTextClip)
        .def_readwrite("FlipTime", &UHUDWidget_Challenges::FlipTime)
        .def_readwrite("HideTime", &UHUDWidget_Challenges::HideTime)
        .def_readwrite("Header_InProgress", &UHUDWidget_Challenges::Header_InProgress)
        .def_readwrite("Header_Complete", &UHUDWidget_Challenges::Header_Complete)
        .def("StaticClass", &UHUDWidget_Challenges::StaticClass, py::return_value_policy::reference)
        .def("GetRewardString", &UHUDWidget_Challenges::GetRewardString)
        .def("GetProgressString", &UHUDWidget_Challenges::GetProgressString)
        .def("GetNameString", &UHUDWidget_Challenges::GetNameString)
        .def("Hide", &UHUDWidget_Challenges::Hide)
        .def("Flip", &UHUDWidget_Challenges::Flip)
        .def("ConditionalShowNextQueuedChallenge", &UHUDWidget_Challenges::ConditionalShowNextQueuedChallenge)
        .def("ShowNextQueuedChallenge", &UHUDWidget_Challenges::ShowNextQueuedChallenge)
        .def("Update", &UHUDWidget_Challenges::Update)
        .def("Deinit", &UHUDWidget_Challenges::Deinit)
        .def("Init", &UHUDWidget_Challenges::Init)
        .staticmethod("StaticClass")
  ;
}