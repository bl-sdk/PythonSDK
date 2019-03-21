#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFrontendGFxMovieDefinition(py::object m)
{
    py::class_< UFrontendGFxMovieDefinition,  UWillowGFxMovie3DDefinition   >(m, "UFrontendGFxMovieDefinition")
        .def_readwrite("OnStart", &UFrontendGFxMovieDefinition::OnStart)
        .def_readwrite("WalkableMapList", &UFrontendGFxMovieDefinition::WalkableMapList)
        .def_readwrite("BlockoutMapList", &UFrontendGFxMovieDefinition::BlockoutMapList)
        .def_readwrite("TestMapList", &UFrontendGFxMovieDefinition::TestMapList)
        .def_readwrite("ListPath", &UFrontendGFxMovieDefinition::ListPath)
        .def_readwrite("HeaderPath", &UFrontendGFxMovieDefinition::HeaderPath)
        .def_readwrite("InviteDisplayTime", &UFrontendGFxMovieDefinition::InviteDisplayTime)
        .def_readwrite("MOTD_HeaderPath", &UFrontendGFxMovieDefinition::MOTD_HeaderPath)
        .def_readwrite("MOTD_BodyPath", &UFrontendGFxMovieDefinition::MOTD_BodyPath)
        .def_readwrite("MOTD_Delay", &UFrontendGFxMovieDefinition::MOTD_Delay)
        .def_readwrite("TooltipPath", &UFrontendGFxMovieDefinition::TooltipPath)
        .def_readwrite("Header_TopLevel", &UFrontendGFxMovieDefinition::Header_TopLevel)
        .def_readwrite("NetworkOptionsMovieDef", &UFrontendGFxMovieDefinition::NetworkOptionsMovieDef)
        .def_readwrite("PlayerDetailsMovieDef", &UFrontendGFxMovieDefinition::PlayerDetailsMovieDef)
        .def_readwrite("OptionsMovieDef", &UFrontendGFxMovieDefinition::OptionsMovieDef)
        .def_readwrite("MatchmakingMovieDef", &UFrontendGFxMovieDefinition::MatchmakingMovieDef)
        .def_readwrite("ConfirmCharacterMovieDef", &UFrontendGFxMovieDefinition::ConfirmCharacterMovieDef)
        .def_readwrite("InitialScrollingListProviderClass", &UFrontendGFxMovieDefinition::InitialScrollingListProviderClass)
        .def("StaticClass", &UFrontendGFxMovieDefinition::StaticClass, py::return_value_policy::reference)
          ;
}