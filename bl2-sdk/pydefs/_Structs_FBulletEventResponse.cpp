#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBulletEventResponse(py::object m)
{
    py::class_< FBulletEventResponse >(m, "FBulletEventResponse")
        .def_readwrite("SplitNum", &FBulletEventResponse::SplitNum)
        .def_readwrite("SplitAngle", &FBulletEventResponse::SplitAngle)
        .def_readwrite("SplitAngleOffset", &FBulletEventResponse::SplitAngleOffset)
        .def_readwrite("SplitDistance", &FBulletEventResponse::SplitDistance)
        .def_readwrite("SplitFire", &FBulletEventResponse::SplitFire)
        .def_readwrite("NewSpeed", &FBulletEventResponse::NewSpeed)
        .def_readwrite("Behaviors", &FBulletEventResponse::Behaviors)
  ;
}