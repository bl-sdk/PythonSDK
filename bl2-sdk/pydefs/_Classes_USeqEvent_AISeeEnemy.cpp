#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_AISeeEnemy()
{
    class_< USeqEvent_AISeeEnemy, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_AISeeEnemy", no_init)
        .def_readwrite("MaxSightDistance", &USeqEvent_AISeeEnemy::MaxSightDistance)
        .def("StaticClass", &USeqEvent_AISeeEnemy::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}