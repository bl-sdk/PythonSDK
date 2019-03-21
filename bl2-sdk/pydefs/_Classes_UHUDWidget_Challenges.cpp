#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHUDWidget_Challenges()
{
    class_< UHUDWidget_Challenges, bases< UHUDWidget_Base >  , boost::noncopyable>("UHUDWidget_Challenges", no_init)
        .def_readwrite("InnerClip", &UHUDWidget_Challenges::InnerClip)
        .def_readwrite("HeaderClip", &UHUDWidget_Challenges::HeaderClip)
        .def_readwrite("SubtextClip", &UHUDWidget_Challenges::SubtextClip)
        .def_readwrite("SubtextInnerClip", &UHUDWidget_Challenges::SubtextInnerClip)
        .def_readwrite("SubtextInnerTextClip", &UHUDWidget_Challenges::SubtextInnerTextClip)
        .def_readwrite("FlipTime", &UHUDWidget_Challenges::FlipTime)
        .def_readwrite("HideTime", &UHUDWidget_Challenges::HideTime)
        .def_readwrite("Header_InProgress", &UHUDWidget_Challenges::Header_InProgress)
        .def_readwrite("Header_Complete", &UHUDWidget_Challenges::Header_Complete)
        .def("StaticClass", &UHUDWidget_Challenges::StaticClass, return_value_policy< reference_existing_object >())
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