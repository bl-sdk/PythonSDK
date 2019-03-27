#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIRBCollisionListener(py::module &m)
{
    py::class_< UIRBCollisionListener,  UInterface   >(m, "UIRBCollisionListener")
		.def_static("StaticClass", &UIRBCollisionListener::StaticClass, py::return_value_policy::reference)
        .def("NotifyRigidBodyCollision", &UIRBCollisionListener::NotifyRigidBodyCollision)
          ;
}