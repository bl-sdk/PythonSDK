#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AIMoveToActor()
{
    class_< USeqAct_AIMoveToActor, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AIMoveToActor", no_init)
        .def_readwrite("Destination", &USeqAct_AIMoveToActor::Destination)
        .def_readwrite("MovementSpeedModifier", &USeqAct_AIMoveToActor::MovementSpeedModifier)
        .def_readwrite("LookAt", &USeqAct_AIMoveToActor::LookAt)
        .def_readwrite("LastDestinationChoice", &USeqAct_AIMoveToActor::LastDestinationChoice)
        .def_readwrite("LatentActors", &USeqAct_Latent::LatentActors)
        .def("StaticClass", &USeqAct_AIMoveToActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("PickDestination", &USeqAct_AIMoveToActor::PickDestination, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_AIMoveToActor::eventGetObjClassVersion)
        .def("eventUpdate", &USeqAct_Latent::eventUpdate)
        .def("AbortFor", &USeqAct_Latent::AbortFor)
        .staticmethod("StaticClass")
  ;
}