#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ProjectileFactory(py::object m)
{
    py::class_< USeqAct_ProjectileFactory,  USeqAct_ActorFactory   >(m, "USeqAct_ProjectileFactory")
        .def_readwrite("PSTemplate", &USeqAct_ProjectileFactory::PSTemplate)
        .def_readwrite("SocketName", &USeqAct_ProjectileFactory::SocketName)
        .def_readwrite("BoneName", &USeqAct_ProjectileFactory::BoneName)
        .def("StaticClass", &USeqAct_ProjectileFactory::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ProjectileFactory::eventGetObjClassVersion)
          ;
}