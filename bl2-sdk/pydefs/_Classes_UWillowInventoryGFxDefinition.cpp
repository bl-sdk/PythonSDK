#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowInventoryGFxDefinition(py::module &m)
{
    py::class_< UWillowInventoryGFxDefinition,  UWillowGFxThirdPersonDefinition   >(m, "UWillowInventoryGFxDefinition")
		.def_static("StaticClass", &UWillowInventoryGFxDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TF_Standard", &UWillowInventoryGFxDefinition::TF_Standard)
        .def_readwrite("TF_Trash", &UWillowInventoryGFxDefinition::TF_Trash)
        .def_readwrite("TF_Favorite", &UWillowInventoryGFxDefinition::TF_Favorite)
        .def_readwrite("TweenTime", &UWillowInventoryGFxDefinition::TweenTime)
        .def_readwrite("Panels", &UWillowInventoryGFxDefinition::Panels)
        .def_readwrite("Cards", &UWillowInventoryGFxDefinition::Cards)
        .def_readwrite("ExternalTextureMap", &UWillowInventoryGFxDefinition::ExternalTextureMap)
        .def_readwrite("CardExternalTextureMap", &UWillowInventoryGFxDefinition::CardExternalTextureMap)
          ;
}