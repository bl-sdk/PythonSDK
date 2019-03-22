#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOptionsGFxMovie(py::module &m)
{
    py::class_< UOptionsGFxMovie,  UWillowGFxMovie3D   >(m, "UOptionsGFxMovie")
        .def_readwrite("OptionsObj", &UOptionsGFxMovie::OptionsObj)
        .def_readwrite("TheList", &UOptionsGFxMovie::TheList)
        .def_readwrite("TooltipSpacing", &UOptionsGFxMovie::TooltipSpacing)
        .def_readwrite("PreviousMenuHeader", &UOptionsGFxMovie::PreviousMenuHeader)
        .def_readwrite("SystemSettings", &UOptionsGFxMovie::SystemSettings)
        .def_readwrite("HandleInputKeyHook", &UOptionsGFxMovie::HandleInputKeyHook)
        .def_readwrite("BackTooltip", &UOptionsGFxMovie::BackTooltip)
        .def("StaticClass", &UOptionsGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("extOptionsMenuOnLoad", &UOptionsGFxMovie::extOptionsMenuOnLoad)
        .def("GetSystemSettings", &UOptionsGFxMovie::GetSystemSettings, py::return_value_policy::reference)
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
          ;
}