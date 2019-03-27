#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsAsset(py::module &m)
{
    py::class_< UPhysicsAsset,  UObject   >(m, "UPhysicsAsset")
		.def_static("StaticClass", &UPhysicsAsset::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BodySetup", &UPhysicsAsset::BodySetup)
        .def_readwrite("BodySetupIndexMap", &UPhysicsAsset::BodySetupIndexMap)
        .def_readwrite("BoundsBodies", &UPhysicsAsset::BoundsBodies)
        .def_readwrite("ConstraintSetup", &UPhysicsAsset::ConstraintSetup)
        .def_readwrite("DefaultInstance", &UPhysicsAsset::DefaultInstance)
        .def("FindBodyIndex", &UPhysicsAsset::FindBodyIndex)
          ;
}