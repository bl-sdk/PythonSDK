#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDefinition()
{
    class_< UGFxMovieDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGFxMovieDefinition", no_init)
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
        .def("StaticClass", &UGFxMovieDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindMovieLink", &UGFxMovieDefinition::FindMovieLink, return_value_policy< reference_existing_object >())
        .def("PostMovieStart", &UGFxMovieDefinition::PostMovieStart)
        .def("SpawnPlayerMovie", &UGFxMovieDefinition::SpawnPlayerMovie, return_value_policy< reference_existing_object >())
        .def("SupportsStatePooling", &UGFxMovieDefinition::SupportsStatePooling)
        .def("GetPoolStyle", &UGFxMovieDefinition::GetPoolStyle)
        .staticmethod("StaticClass")
  ;
}