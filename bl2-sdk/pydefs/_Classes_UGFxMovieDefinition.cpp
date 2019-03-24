#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDefinition(py::module &m)
{
    py::class_< UGFxMovieDefinition,  UGBXDefinition   >(m, "UGFxMovieDefinition")
		.def_static("StaticClass", &UGFxMovieDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SwfMovie", &UGFxMovieDefinition::SwfMovie)
        .def_readwrite("SwfMovieClass", &UGFxMovieDefinition::SwfMovieClass)
        .def_readwrite("Movie", &UGFxMovieDefinition::Movie)
        .def_readwrite("ExternalInterfaceClass", &UGFxMovieDefinition::ExternalInterfaceClass)
        .def_readwrite("FadeInSeconds", &UGFxMovieDefinition::FadeInSeconds)
        .def_readwrite("FadeOutSeconds", &UGFxMovieDefinition::FadeOutSeconds)
        .def_readwrite("WorldLightingDirectionOffset", &UGFxMovieDefinition::WorldLightingDirectionOffset)
        .def_readwrite("DrawStyle", &UGFxMovieDefinition::DrawStyle)
        .def_readwrite("DepthPriority", &UGFxMovieDefinition::DepthPriority)
        .def_readwrite("PoolType", &UGFxMovieDefinition::PoolType)
        .def_readwrite("ScaleMode", &UGFxMovieDefinition::ScaleMode)
        .def_readwrite("AlignMode", &UGFxMovieDefinition::AlignMode)
        .def_readwrite("TimingMode", &UGFxMovieDefinition::TimingMode)
        .def_readwrite("RenderTextureMode", &UGFxMovieDefinition::RenderTextureMode)
        .def_readwrite("Pool", &UGFxMovieDefinition::Pool)
        .def_readwrite("CustomStates", &UGFxMovieDefinition::CustomStates)
        .def_readwrite("AutoActivateStates", &UGFxMovieDefinition::AutoActivateStates)
        .def_readwrite("MenuLinks", &UGFxMovieDefinition::MenuLinks)
        .def_readwrite("RenderTexture", &UGFxMovieDefinition::RenderTexture)
        .def_readwrite("InteractionOverrideSounds", &UGFxMovieDefinition::InteractionOverrideSounds)
        .def_readwrite("BaseMovieStates", &UGFxMovieDefinition::BaseMovieStates)
        .def("FindMovieLink", &UGFxMovieDefinition::FindMovieLink, py::return_value_policy::reference)
        .def("PostMovieStart", &UGFxMovieDefinition::PostMovieStart)
        .def("SpawnPlayerMovie", &UGFxMovieDefinition::SpawnPlayerMovie, py::return_value_policy::reference)
        .def("SupportsStatePooling", &UGFxMovieDefinition::SupportsStatePooling)
        .def("GetPoolStyle", &UGFxMovieDefinition::GetPoolStyle)
          ;
}