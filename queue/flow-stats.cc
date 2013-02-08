#include "flow-stats.h"

FlowStats::FlowStats() :
  _last_arrival( 0.0 ),
  _last_service( 0.0 ),
  _last_link_update( 0.0 ),
  _acc_arr_pkt_size( 0.0 ),
  _acc_dep_pkt_size( 0.0 ),
  _flow_arrival_rate( 0.00001 ),
  _flow_service_rate( 0.00001 ),
  _flow_link_rate( 0.00001 ),
  _last_drop_prob( 0.0 )
{}
