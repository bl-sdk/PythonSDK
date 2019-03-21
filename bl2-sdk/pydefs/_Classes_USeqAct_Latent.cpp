#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_Latent()
{
    py::class_< USeqAct_Latent,  USequenceAction   >("USeqAct_Latent")
        .def_readwrite("LatentActors", &USeqAct_Latent::LatentActors)
        .def("StaticClass", &USeqAct_Latent::StaticClass, py::return_value_policy::reference)
        .def("eventUpdate", &USeqAct_Latent::eventUpdate)
        .def("AbortFor", &USeqAct_Latent::AbortFor)
        .staticmethod("StaticClass")
  ;
}