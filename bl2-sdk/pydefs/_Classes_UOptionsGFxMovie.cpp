#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOptionsGFxMovie()
{
    class_< UOptionsGFxMovie, bases< UWillowGFxMovie3D >  , boost::noncopyable>("UOptionsGFxMovie", no_init)
        .def_readwrite("OptionsObj", &UOptionsGFxMovie::OptionsObj)
        .def_readwrite("TheList", &UOptionsGFxMovie::TheList)
        .def_readwrite("TooltipSpacing", &UOptionsGFxMovie::TooltipSpacing)
        .def_readwrite("PreviousMenuHeader", &UOptionsGFxMovie::PreviousMenuHeader)
        .def_readwrite("SystemSettings", &UOptionsGFxMovie::SystemSettings)
        .def_readwrite("HandleInputKeyHook", &UOptionsGFxMovie::HandleInputKeyHook)
        .def_readwrite("BackTooltip", &UOptionsGFxMovie::BackTooltip)
        .def("StaticClass", &UOptionsGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("extOptionsMenuOnLoad", &UOptionsGFxMovie::extOptionsMenuOnLoad)
        .def("GetSystemSettings", &UOptionsGFxMovie::GetSystemSettings, return_value_policy< reference_existing_object >())
        .def("OnScrollingListItemFocus", &UOptionsGFxMovie::OnScrollingListItemFocus)
        .def("UpdateTooltips", &UOptionsGFxMovie::UpdateTooltips)
        .def("AppendTooltipString", &UOptionsGFxMovie::AppendTooltipString)
        .def("UpdateHeader", &UOptionsGFxMovie::UpdateHeader)
        .def("CloseMovie", &UOptionsGFxMovie::CloseMovie)
        .def("HandleInputKey", &UOptionsGFxMovie::HandleInputKey)
        .def("RefreshListHandler", &UOptionsGFxMovie::RefreshListHandler)
        .def("OnScollingListSelectedIndexChanged", &UOptionsGFxMovie::OnScollingListSelectedIndexChanged)
        .def("OnScrollingListChanged", &UOptionsGFxMovie::OnScrollingListChanged)
        .def("UpdateFrameForAspectRatio", &UOptionsGFxMovie::UpdateFrameForAspectRatio)
        .def("eventOnTick", &UOptionsGFxMovie::eventOnTick)
        .def("SaveOptions", &UOptionsGFxMovie::SaveOptions)
        .def("eventOnClose", &UOptionsGFxMovie::eventOnClose)
        .def("eventStart", &UOptionsGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}