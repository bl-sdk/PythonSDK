#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ForceGarbageCollection()
{
    class_< USeqAct_ForceGarbageCollection, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_ForceGarbageCollection", no_init)
        .def("StaticClass", &USeqAct_ForceGarbageCollection::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}