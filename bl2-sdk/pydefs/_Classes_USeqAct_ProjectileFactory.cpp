#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ProjectileFactory()
{
    class_< USeqAct_ProjectileFactory, bases< USeqAct_ActorFactory >  , boost::noncopyable>("USeqAct_ProjectileFactory", no_init)
        .def_readwrite("PSTemplate", &USeqAct_ProjectileFactory::PSTemplate)
        .def_readwrite("SocketName", &USeqAct_ProjectileFactory::SocketName)
        .def_readwrite("BoneName", &USeqAct_ProjectileFactory::BoneName)
        .def("StaticClass", &USeqAct_ProjectileFactory::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ProjectileFactory::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}