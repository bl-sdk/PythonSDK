#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIRBCollisionListener(py::module &m)
{
    py::class_< UIRBCollisionListener,  UInterface   >(m, "UIRBCollisionListener")
        .def("NotifyRigidBodyCollision", &UIRBCollisionListener::NotifyRigidBodyCollision)
          ;
}