#pragma once

#include <eosio/chain/types.hpp>
#include <eosio/chain/contract_types.hpp>

namespace eosio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_foc_newaccount(apply_context&);
   void apply_foc_updateauth(apply_context&);
   void apply_foc_deleteauth(apply_context&);
   void apply_foc_linkauth(apply_context&);
   void apply_foc_unlinkauth(apply_context&);

   /*
   void apply_foc_postrecovery(apply_context&);
   void apply_foc_passrecovery(apply_context&);
   void apply_foc_vetorecovery(apply_context&);
   */

   void apply_foc_setcode(apply_context&);
   void apply_foc_setabi(apply_context&);

   void apply_foc_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace eosio::chain
