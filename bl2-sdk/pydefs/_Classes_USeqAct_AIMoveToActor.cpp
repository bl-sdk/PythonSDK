#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AIMoveToActor(py::module &m)
{
    py::class_< USeqAct_AIMoveToActor,  USequenceAction   >(m, "USeqAct_AIMoveToActor")
        .def_readwrite("Destination", &USeqAct_AIMoveToActor::Destination)
        .def_readwrite("MovementSpeedModifier", &USeqAct_AIMoveToActor::MovementSpeedModifier)
        .def_readwrite("LookAt", &USeqAct_AIMoveToActor::LookAt)
        .def_readwrite("LastDestinationChoice", &USeqAct_AIMoveToActor::LastDestinationChoice)
        .def_readwrite("LatentActors", &USeqAct_Latent::LatentActors)
        .def("PickDestination", &USeqAct_AIMoveToActor::PickDestination, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_AIMoveToActor::eventGetObjClassVersion)
        .def("eventUpdate", &USeqAct_Latent::eventUpdate)
        .def("AbortFor", &USeqAct_Latent::AbortFor)
          ;
}