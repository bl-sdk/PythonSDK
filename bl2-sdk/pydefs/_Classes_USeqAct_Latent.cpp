#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Latent()
{
    class_< USeqAct_Latent, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Latent", no_init)
        .def_readwrite("LatentActors", &USeqAct_Latent::LatentActors)
        .def("StaticClass", &USeqAct_Latent::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventUpdate", &USeqAct_Latent::eventUpdate)
        .def("AbortFor", &USeqAct_Latent::AbortFor)
        .staticmethod("StaticClass")
  ;
}