#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFlagEvalORConnector()
{
    class_< FFlagEvalORConnector >("FFlagEvalORConnector", no_init)
        .def_readwrite("ANDChain", &FFlagEvalORConnector::ANDChain)
  ;
}