#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_PlayMultipleExplosionsSound(py::module &m)
{
    py::class_< UBehavior_PlayMultipleExplosionsSound,  UBehaviorBase   >(m, "UBehavior_PlayMultipleExplosionsSound")
		.def_static("StaticClass", &UBehavior_PlayMultipleExplosionsSound::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Definition", &UBehavior_PlayMultipleExplosionsSound::Definition)
        .def_readwrite("OverrideContext", &UBehavior_PlayMultipleExplosionsSound::OverrideContext)
        .def_readwrite("OverrideName", &UBehavior_PlayMultipleExplosionsSound::OverrideName)
        .def("ApplyBehaviorToContext", &UBehavior_PlayMultipleExplosionsSound::ApplyBehaviorToContext)
          ;
}